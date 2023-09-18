#include <math.h>
#include <stdio.h>

int main() {
	float p,c,m,b,C;
	printf("enter your marks in 5 subjects (out of 80)(phy,chem,Cs,bio,math): ");
	scanf("%f""%f""%f""%f""%f",&p,&c,&C,&b,&m);
	float P,Q,R,S,T;
	P = p*100/80;
	Q = c*100/80;
	R = C*100/80;
	S = b*100/80;
	T = m*100/80;
	printf("Percentage in physics is %f\n",P);
	printf("Percentage in math is %f\n",T);
	printf("Percentage in chem is %f\n",Q);
	printf("Percentage in cs is %f\n",R);
	printf("Percentage in bio is %f\n",S);
	if(P>=90){
		
		printf("A GRADE IN PHYSICS\n");
	}
	else if(80<=P<90){
		printf("B GRADE IN PHYSICS\n");
	}
	else if(70<=P<80){
		printf("C GRADE IN PHYSICS\n");
	}
	else if(60<=P<70){
		printf("D GRADE IN PHYSICS\n");
	}
	else if (40<=P<60){
		printf("E GRADE IN PHSICS\n");
	}
	else
	printf("F GRADE IN PHYSICS\n");
	
	if(Q>=90){
		
		printf("A GRADE IN CHEM\n");
	}
	else if(80<=Q<90){
		printf("B GRADE IN CHEM\n");
	}
	else if(70<=Q<80){
		printf("C GRADE IN CHEM\n");
	}
	else if(60<=Q<70){
		printf("D GRADE IN CHEM\n");
	}
	else if (40<=Q<60){
		printf("E GRADE IN CHEM\n");
	}
	else
	printf("F GRADE IN CHEM\n");
	
	if(R>=90){
		
		printf("A GRADE IN CS\n");
	}
	else if(80<=R<90){
		printf("B GRADE IN CS\n");
	}
	else if(70<=R<80){
		printf("C GRADE IN CS\n");
	}
	else if(60<=R<70){
		printf("D GRADE IN CS\n");
	}
	else if (40<=R<60){
		printf("E GRADE IN CS\n");
	}
	else
	printf("F GRADE IN CS\n");
	
	if(S>=90){
		
		printf("A GRADE IN BIO\n");
	}
	else if(80<=S<90){
		printf("B GRADE IN BIO\n");
	}
	else if(70<=S<80){
		printf("C GRADE IN BIO\n");
	}
	else if(60<=S<70){
		printf("D GRADE IN BIO\n");
	}
	else if (40<=S<60){
		printf("E GRADE IN BIO\n");
	}
	else
	printf("F GRADE IN BIO\n");
	
	if(T>=90){
		
		printf("A GRADE IN MATH\n");
	}
	else if(80<=T<90){
		printf("B GRADE IN MATH\n");
	}
	else if(70<=T<80){
		printf("C GRADE IN MATH\n");
	}
	else if(60<=T<70){
		printf("D GRADE IN MATH\n");
	}
	else if (40<=T<60){
		printf("E GRADE IN MATH\n");
	}
	else
	printf("F GRADE IN MATH\n");
	return 0;
	
}
