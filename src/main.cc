#include <iostream>
#include <curl/curl.h>

int main() {
	curl_global_init(CURL_GLOBAL_ALL);

	CURL* curl = curl_easy_init();

    if (!curl) {
        std::cerr << "Failed to initialize cURL." << std::endl;
        return 1;
    }

    // Set the URL to retrieve
    curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");

    // Perform the HTTP GET request
    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
        std::cerr << "cURL failed: " << curl_easy_strerror(res) << std::endl;
    }

    // Clean up
    curl_easy_cleanup(curl);
    curl_global_cleanup();

}