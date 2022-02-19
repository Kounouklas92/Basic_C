#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void printing_results(void);

typedef struct
{
	uint8_t price;
	uint8_t age;
    uint8_t* random;
	uint8_t driverAge;		
}__attribute__((packed)) car;


car car1 = {230,25};
car* pcar;

int main()
{
	printing_results();
	//Allocate memory for integer
    car1.random =  malloc(sizeof(uint8_t*));
    //check allocated memory
    if((car1.random) == NULL)
    {
      //  printf("FAIL TO ALLOCATE MEMORY\n");
    }
    // Copy 12 in piData
    *car1.random = 122;
	
	printf("%u\n",*car1.random);
	pcar = &car1;
	printf("%u\n",*pcar->random);
		
	return 0;	
}

//Prints sizes,addresses
void printing_results(void)
{
	printf("size of car struct is:    %d ",sizeof(car1));
	printf("address car struct is:    %p\n",&car1);
	printf("size of price member is:  %d  ",sizeof(car1.price));
	printf("address price member is:  %p\n",&car1.price);
	printf("size of age member is:    %d  ",sizeof(car1.age));
	printf("address age member is:    %p\n",&car1.age);
	printf("size of random member is: %d  ",sizeof(car1.random));
	printf("address random member is: %p\n",&car1.random);
	printf("size of driverAge member is: %d  ",sizeof(car1.driverAge));
	printf("address driverAge member is: %p\n",&car1.driverAge);
}

