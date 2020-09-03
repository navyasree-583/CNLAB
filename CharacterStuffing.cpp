#include<stdio.h>
#include<string.h>
int main(){
	char header[10];
	char trailer[10];
	char character[100];
	char add[10];
	char out[100];
    char esc[]="esc";
	int k=0;

	printf("Enter the characters : ");
	scanf("%s", character);
	printf("Enter the characters that represents starting delimeter : ");
	scanf("%s",header);
	printf("Enter the characters  that represents ending delimeter : ");
	scanf("%s",trailer);
    printf("Enter the character that is to be stuffed  : ");
    scanf("%s",add);
    
    for(int i=0; i<strlen(header); i++){
    	out[k]=header[i];
    	k++;
	}
	for(int i=0; i<strlen(character); i++){
		int c=0;
		for(int j=i,l=0; j<(i+strlen(header)); j++,l++){
			if(character[j]==header[l]){
				c++;
			}
			else{
				break;
			}
		}
		if(c==strlen(header)){
			for(int m=0; m<strlen(add); m++){
				out[k]=add[m];
				k++;
			}
		}
		c=0;
		for(int j=i,l=0; j<(i+strlen(trailer));j++,l++){
			if(character[j]==trailer[l]){
				c++;
			}
			else{
				break;
			}
		}
		
		
		if(c==strlen(trailer)){
			for(int m=0;m<strlen(add);m++){
				out[k]=add[m];
				k++;
			}
		}
		c=0;
		for(int j=i,l=0; j<(i+strlen(esc)); j++,l++){
		if(character[j]==trailer[l]){
			c++;
		}
		else{
			break;
		}
		}
		if(c==strlen(esc)){
			for(int m=0; m<strlen(add); m++){
				out[k]=add[m];
				k++;
			}
		}
		out[k]=character[i];
		k++;
	}
	for(int i=0;i<strlen(trailer);i++){
		out[k]=trailer[i];
		k++;
	}
	out[k]='\0';
	printf("\nAfter stuffing : %s\n", out);
	return 0;
	
}
