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
