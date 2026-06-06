#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


int nth_fibb(int n) {
	int sum = 0;

	for(int i = 0; i <= n; i++) {
		sum = sum + i;
	}

	return sum;
}

void preaty_print(int n) {
	std::cout << n;
	std::cout << "-th sum is: ";
	std::cout << nth_fibb(n) << '\n';
}

void hello_world() {
    std::cout << "====Starting====" << "\n";
    std::cout << "Hello World from C++!" << "\n";
}

extern "C" void app_main() {
	hello_world();
    
	int n = 100;

	for(int j = 0; j <= n; j++) {
		preaty_print(j);
	}

    while(1) {
        vTaskDelay(pdMS_TO_TICKS(1000));  // Wait 1 second
    }
}
