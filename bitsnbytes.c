#include<stdio.h>
#define BITS sizeof(int) * 8


int bitAnd(int x, int y){

        int result = ~( (~x) | (~y) );

        return result;
}

int bitXor(int x, int y){

        int result;

        result =  ((~(x & y)) & ~((~x) & (~y)));

        return result;
}

int sign(int x){

        int result;

        result = ( (!!x) | (x >> BITS - 1) );

        return result;
}

int getByte(int num, int byte){

        return (num >> (8*byte) & 0xff);
}

int logicalShift(int x, int n){

	return (x >> n) & (~(((1 << 31) >> n) << 1));

}


int conditional(int a, int b, int c){

        return c ^ ((b ^ c) & ((!a) + (~0)));
}

int bang(int x){

        int a = ~x;
        int b = a+1;

        return (((~b) & a ) >> BITS - 1) & 1;

}

int invert(int x, int p, int n){

        unsigned int num = (unsigned int)x;
        unsigned int mask = 1 << p;

        for(int i = 0; i < n; i++){

                x = x ^ mask;
                mask = mask << 1;
        }

        return (int)x;
}


int main(){

	int choice, x, y, z, byte;
	printf("1. AND\n2. XOR\n3. SIGN\n4. GET_BYTE\n5. LOGICAL SHIFT\n6. CONDITONAL\n7. BANG\n8. INVERT\n");
	scanf("%d", &choice);
	
	switch(choice){

	case 1:

        printf("Enter numbers :");
        scanf("%d", &x);
        scanf("%d", &y);

        printf("%d ", bitAnd(x, y));
	break;

	case 2:

        printf("Enter Numbers : ");

        scanf("%d", &x);
        scanf("%d", &y);

        printf("%d ", bitXor(x, y));
	break;

	case 3:
	printf("Enter number : ");

        int x;
        scanf("%d", &x);
        printf("%d", sign(x));
	break;

	case 4:
	printf("Enter number and byte : ");

        scanf("%x", &x);
        scanf("%d", &byte);
        printf("0x%x ", getByte(x, byte));
	break;

	case 5:
	printf("Enter number and bits : ");

	scanf("%x", &x);
	scanf("%d", &y);
	printf("0x%x", logicalShift(x, y));
	break;

	case 6:
	printf("Enter numbers : ");


        scanf("%d %d %d", &x, &y, &z);
	printf("%d", conditional(x, y, z));
	break;

	case 7:
	printf("Enter number : ");

        scanf("%d", &x);
	printf("%d", bang(x));
	break;

	case 8:
	printf("Enter number , position and bits : ");
	
	scanf("%d %d %d", &x, &y, &z);
        printf("%d ", invert(x, y, z));
	break;

	default:
	printf("Invalid input");
	break;

}

	return 0;
}