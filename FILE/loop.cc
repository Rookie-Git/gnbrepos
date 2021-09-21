#include <stdio.h>
#include <iostream>
#include <thread>
#include <chrono>

int main()
{
	int n=100;
	using namespace std::chrono_literals;

	while(true)
	{
		printf("%d\n", n);
		n++;
		std::this_thread::sleep_for(1s);
	}
}

