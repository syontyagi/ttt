#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gameover.h"

int wonbyrows(int arr[], int len)
{
	int i;
	if(arr[0] == 2 || arr[3] == 2 || arr[6] == 2) {
	      return 0;
	}	      
	//if index 0, 1, and 2 are same
	if(arr[0] == arr[1] && arr[0] == arr[2]) {
		if(arr[0] == 1) {
			printf("Player 1 has won the game!\n");
		} else {
			printf("Player 2 has won the game!\n");
		}
		return 1;
	}
	//if index 3, 4, and 5 are same
	if(arr[3] == arr[4] && arr[3] == arr[5]) {
		if(arr[3] == 1) {
			printf("Player 1 has won the game!\n");
		} else {
			printf("Player 2 has won the game!\n");
		}
		return 1;
	}
	//if index 6, 7, and 8 are same
	if(arr[6] == arr[7] && arr[6] == arr[8]) {
		if(arr[6] == 1) {
			printf("Player 1 has won the game!\n");
		} else {
			printf("Player 2 has won the game!\n");
		}
		return 1;
	}
	return 0;
}


int gameover(int arr[], int len) {
	if (wonbyrows(arr, len) == 1) {
		return 1;
	}
	return 0;
}






/*int wonbycolumns(int arr[], int len)
{
	int i;
	for(i=0;i<len;i++) {
		if(arr[0] == arr[3] && arr[0] == [6]) {
			if(arr[0] == 1) {
				printf("Player 1 has won the game!");
			} else {
				printf("Player 2 has won the game!");
			}
		}
		if(arr[1] == arr[4] && arr[1] == arr[7]) {
			if(arr[1] == 1) {
				printf("Player 1 has won the game!");
			} else {
				printf("Player 2 has won the game!");
			}
		}
		if(arr[2] == arr[5] && arr[2] == arr[8]) {
			if(arr[2] == 1) {
				printf("Player 1 has won the game!");
			} else {
				printf("Player 2 has won the game!");
			}
		}
	}
	return 0;
}*/