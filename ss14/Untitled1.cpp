#include <stdio.h>
void sapxep(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {  // So sánh và hoán d?i
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
	int arrnew[6] = {1,2,4,6,2,3};
	sapxep(arrnew,6);
	for(int i = 0 ; i<6 ; i++){
		printf("%d \n",arrnew[i]);
	}
}
