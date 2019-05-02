#include <iostream>
#include <curl/curl.h>
#include <string>
#include <cstring>
#include <clocale>

const int MAXLENGTH = 2048;

wchar_t g_content[MAXLENGTH];
int g_pos = 0;

size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
    /*int writeten = write(ptr, g_content + g_pos ), size);
    g_pos += writeten;
    */
    std::wcout << (char*) ptr<< std::endl;
    
    return size * nmemb;
}

int main(int argc,char *argv[])
{
    memset(g_content,0,sizeof(g_content));
    CURL *curl = NULL;

	curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl,CURLOPT_URL, argv[1]);
        curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

	return 0;
}

