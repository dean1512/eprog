#include<stdio.h>

int main(){
	int i, grades[3];
	float a, sum;
	for(i=0; i<3; i++){ 
		printf("Enter grade %d: ", i+1); 
		scanf("%d", &grades[i]); 
	} 
	sum=0; 
	for(i=0; i<3; i++){ 
		sum=sum+grades[i]; 
	} 
	a=sum/3; 
	printf("The grades ave: %.2f\n", a); 
	if(a>=75){
printf("Pass");
}
else{
printf("Fail");
}
}
