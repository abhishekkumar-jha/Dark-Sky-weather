const apiKey = "85804ef09efc4dc3870213348253004";
const baseUrl = "https://api.weatherapi.com/v1";

async function fetchWeather(city) {
  if (!city) return;

  const currentUrl = `${baseUrl}/current.json?key=${apiKey}&q=${city}`;
  const forecastUrl = `${baseUrl}/forecast.json?key=${apiKey}&q=${city}&days=7`;

  try {
    const [currentRes, forecastRes] = await Promise.all([
      fetch(currentUrl),
      fetch(forecastUrl)
    ]);

    const currentData = await currentRes.json();
    const forecastData = await forecastRes.json();

    updateCurrentWeather(currentData, forecastData.forecast.forecastday);
    updateForecast(forecastData.forecast.forecastday);
  } catch (error) {
    alert("City not found. Please try again.");
  }
}

function updateCurrentWeather(data, forecastDays) {
  document.getElementById("location").textContent = `Weather in ${data.location.name}`;
  document.getElementById("temperature").textContent = `${data.current.temp_c}°C`;
  document.getElementById("condition").textContent = data.current.condition.text;
  document.getElementById("humidity").textContent = data.current.humidity;
  document.getElementById("wind").textContent = data.current.wind_kph;
  document.getElementById("airQuality").textContent = "Good"; // Placeholder
  document.getElementById("sunrise").textContent = forecastDays[0].astro.sunrise;
  document.getElementById("sunset").textContent = forecastDays[0].astro.sunset;

  document.getElementById("currentWeather").style.display = "block";
}

function updateForecast(days) {
  const container = document.getElementById("forecast");
  container.innerHTML = "";
  container.style.display = "flex";

  days.forEach(day => {
    const div = document.createElement("div");
    div.className = "forecast-day";
    div.innerHTML = `
      <h3>${new Date(day.date).toLocaleDateString(undefined, { weekday: 'long' })}</h3>
      <div class="icon">🌤</div>
      <p>Day: ${day.day.maxtemp_c}°C</p>
      <p>Night: ${day.day.mintemp_c}°C</p>
    `;
    container.appendChild(div);
  });
}

// Trigger search on Enter key
document.getElementById("searchInput").addEventListener("keypress", function (e) {
  if (e.key === "Enter") fetchWeather(this.value);
});
