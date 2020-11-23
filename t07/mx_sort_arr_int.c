void mx_sort_arr_int(int *arr, int size){
	short check = 0;
	while(1){
    	for(int i = 0; i < size - 1; ++i){
    		if(arr[i] > arr[i + 1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				check = 1;
			}
    	}
		if(check == 0) return;
		else check = 0;
  	}
}
