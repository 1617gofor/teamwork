#include "type.h"
#include <ctype.h>
//temp = 0 ��д->Сд
//temp = 1 Сд->��д 
void Number::Judge()
{
	int flag = 0;
	char ch;
	for(int i = 0; i < input.length(); i++){
		if(isdigit(input[i])){
			flag = 1;
			break;
		}
	}
	if(flag){
		temp = 1;
	}else{
		temp = 0;
	}
}
