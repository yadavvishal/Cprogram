#include<stdio.h>
int main()
{
	int phy,chem,maths;
	printf("enter marks of phy,chem,maths:");
	scanf("%d%d%d",&phy,&chem,&maths);
	if(phy>40)
	{
		if(chem>50)
		{
			if(maths>60)
			{
				if((phy+maths)>150 ||(phy+chem+maths)>200)
				printf("ELIGIBLE");
				else
				printf("NOT ELIGIBLE");
			}
			else printf("NOT ELIGIBLE");
		}
		else printf("NOT ELIGIBLE");
	}
	else printf("NOT ELIGIBLE");
}
