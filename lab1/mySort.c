void mySort(int d[], unsigned int n)
{
int key; /* Temporarily stores array value */ 
int i; /* outer loop index */
int j; /* inner loop index*/

for (i=1; i<n; i++){

	key = d[i];
	j=i-1;
	
while (j>=0 && d[j] > key){

	d[j+1]=d[j];
	j= j-1;
						  }

	d[j+1]=key;
					}
}
