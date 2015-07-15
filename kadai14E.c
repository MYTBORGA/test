#include<stdio.h>
#include<stdlib.h>

typedef struct Gaku_inf
{
	char g_no[7];
	int g_kamoku1;
	int g_kamoku2;
	double g_heikin;
	struct Gaku_inf *next;
}dat;

int main(void)
{
	char no[7];
	dat *g_pstart,*g_padd;
	
	g_padd = (dat *)malloc(sizeof(dat));
	g_padd->next = NULL;
	
	g_pstart = g_padd;
	
	printf("ŠwÐ”Ô†-->");
	while(scanf("%s",g_padd->g_no) != EOF)
	{
		printf("‰È–Ú1-->");
		scanf("%d",&g_padd->g_kamoku1);
		
		printf("‰È–Ú2-->");
		scanf("%d",&g_padd->g_kamoku2);
		
		g_padd->g_heikin = (double)(g_padd->g_kamoku1 + g_padd->g_kamoku2) / 2;
		
		g_padd->next = (dat *)malloc(sizeof(dat));
		g_padd = g_padd->next;
		
		printf("ŠwÐ”Ô†-->");
	}
	
	g_padd->next = NULL;
	
	printf("\n");
	
	g_padd = g_pstart;
	
	 while(g_padd->next != NULL)
	 {
	 	printf("ŠwÐ”Ô†:%s\n",g_padd->g_no);
		
		printf("‰È–Ú1:%d\n",g_padd->g_kamoku1);
		
		printf("‰È–Ú2:%d\n",g_padd->g_kamoku2);
		
		printf("•½‹Ï:%.1f\n",g_padd->g_heikin);
		
		g_padd = g_padd->next;
	 }
	 
	 printf("end\n");
	 
	 return 0
} 