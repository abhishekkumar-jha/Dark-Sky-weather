#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<curl/curl.h>
#include<cjson/cJSON.h>

// Replace with your OpenWeatherMap API key
#define API_KEY "your_api_key"
#define API_URL "your URL"

//FUnction to handle the HTTP response 
size-t write_callback(void*ptr, size_t size, size_t nmemb, char*data) {
  strcat(data, ptr);
  return size * nmemb;
}

//Function to get weather Data
void get_weather(const char*city) {
  CURL *curl;
  CURLcode res;
  char url[256];
  char data[2048] = ""; // Store the HTTP response here

// Prepare the API URL
snprintf(url, sizeof(url), API_URL, city, API_KEY);

// Initialize libcurl
curl_global_init(CURL_GLOBAL_DEFAULT);


