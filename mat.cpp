#include <stdio.h>
#include <conio.h>
int main()
{
	int M[3][3]={0},A[100][100]={0},B[100][100]={0},C[100][100]={0},D[100][100]={0},E[100][100]={0};
	float hz[3][3]={0};
	int a,deraye,n,m,i,j,k,o,p,q,t,r,detrminan=0;
	printf("satr & sutun matris ra vared konid:\nsatr:");
	scanf("%d",&m);
	printf("sutun:");
	scanf("%d",&n);
	printf("derayeha ra b tartib vared konid:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}

	}//tarife matris.

	printf("A:%d*%d\n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}//nemayeshe matris.
	////////////////////////////////////////
	printf("\n\nsatr & sutun deraye'i k mikhahid taghiir dahid ra vared konid: ");
	scanf("%d%d",&i,&j);
	printf("\nadad morede nazar ra vared konid: ");
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	printf("%d\t",A[i][j]);
	printf("\n");
	}//taghiire yek deraye.
	///////////////////////////////
	printf("\n\nadadi ra k mikhahid dar matris zarb shavad ra vared konid:");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	A[i][j]=t*A[i][j];
	for(i=0;i<n;i++){
	for(j=0;j<m;j++)
	printf("%d\t",A[i][j]);
	printf("\n");
	}//zarbe adad dar matris.
	/////////////////////////////////////
	printf("\n\nsatr & sutun matrisi k mikhahid zarb konid ra vared konid:\nsatr:");
	scanf("%d",&o);
	printf("sutun:");
	scanf("%d",&p);
	while(n!=o){
		printf("\nIncorrect dimensions.");
		printf("\nsatr & sutun matrisi k mikhahid zarb konid ra vared konid:\nsatr:");
		scanf("%d",&o);
		printf("sutun:");
		scanf("%d",&p);

	};

	printf("\nderayeha ra b tartib vared konid:\n");
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
	/////////////////////////////////////////

	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
			printf("%d\t",C[i][j]);
		printf("\n");
	}
	//zarbe 2matris.
	////////////////////////////
	printf("\n\nsatr & sutun matrisi k mikhahid jam konid ra vared konid:\nsatr:");
	scanf("%d",&q);
	printf("sutun:");
	scanf("%d",&r);
	while(q!=n||r!=m){
	printf("\nIncorrect dimensions.");
		printf("\nsatr & sutun matrisi k mikhahid jam konid ra vared konid:\nsatr:");
		scanf("%d",&q);
		printf("sutun:");
		scanf("%d",&r);
	};
	printf("\nderayeha ra b tartib vared konid:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("D[%d][%d]=",i,j);
			scanf("%d",&D[i][j]);
		}
	}
	printf("E:%d*%d\n",m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			E[i][j]=A[i][j]+D[i][j];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",E[i][j]);
		printf("\n");
	}
	////////////////////////////////////
	printf("\nderayeha ra b tartib vared konid:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("M[%d][%d]=",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	//////////////////////////////////////////////////////////
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",M[i][j]);
		printf("\n");
	}
	////////////////////////////////////////////////////

	detrminan=M[0][0]*(M[1][1]*M[2][2]-M[1][2]*M[2][1])-M[0][1]*(M[1][0]*M[2][2]-M[1][2]*M[2][0])+M[0][2]*(M[1][0]*M[2][1]-M[1][1]*M[2][0]);
	printf("\ndetrminan=%d\n",detrminan);
	if(detrminan==0)
		printf("\ncannot compute the inversion of this matrix.\n");
	else
		printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			hz[0][0]=(M[1][1]*M[2][2])-(M[1][2]*M[2][1]);
			hz[0][1]=-((M[1][0]*M[2][2])-(M[1][2]*M[2][0]));
			hz[0][2]=(M[1][0]*M[2][1])-(M[1][1]*M[2][0]);
			hz[1][0]=-((M[0][1]*M[2][2])-(M[0][2]*M[2][1]));
			hz[1][1]=(M[0][0]*M[2][2])-(M[0][2]*M[2][0]);
			hz[1][2]=-((M[0][0]*M[2][1])-(M[0][1]*M[2][0]));
			hz[2][0]=(M[0][1]*M[1][2])-(M[1][1]*M[0][2]);
			hz[2][1]=-((M[0][0]*M[1][2])-(M[0][2]*M[1][0]));
			hz[2][2]=(M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
		}
	}
	/********************************/
	float tmp;
	for (int i=1;i<3;i++)
	{
		for (int j=0;j<i;j++)
		{
			tmp = hz[i][j];
			hz[i][j] = hz[j][i];
			hz[j][i] = tmp;
		}
	}//taranahade
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			hz[i][j]=hz[i][j]/detrminan;
		}
	}
	/**************************/
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%0.2f\t",hz[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}