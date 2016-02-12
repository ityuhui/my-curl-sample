#include <iostream>
#include <curl/curl.h>

int main(int argc,char *argv[])
{


	curl_global_init(CURL_GLOBAL_ALL);

	std::cout<<"hello,libcurl!"<<std::endl;
	return 0;
}

