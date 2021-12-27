#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint8_t price;
	uint8_t age;
    uint8_t* random;		
}__attribute__((packed)) car;


car car1 = {230,25,122};
car* pcar;

int main()
{
	printing_results();
	
	printf("%d\n",car1.random);
	pcar = &car1;
	printf("%d\n",pcar->random);
		
	return 0;	
}

void printing_results(void)
{
	printf("size car struct is:       %d ",sizeof(car1));
	printf("address car struct is:    %p\n",&car1);
	printf("size of price member is:  %d  ",sizeof(car1.price));
	printf("address price member is:  %p\n",&car1.price);
	printf("size of age member is:    %d  ",sizeof(car1.age));
	printf("address age member is:    %p\n",&car1.age);
	printf("size of random member is: %d  ",sizeof(car1.random));
	printf("address random member is: %p\n",&car1.random);
}

