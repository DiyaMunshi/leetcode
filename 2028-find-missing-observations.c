/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* missingRolls(int* rolls, int rollsSize, int mean, int n, int* returnSize) {
    int* res=(int*)malloc(n*sizeof(int));
    int x= mean*(rollsSize+n);
    int sum=0;
    for(int i=0;i<rollsSize;i++)
    {
        sum+=rolls[i];
    }
    int y=x-sum;

    if(y>n*6||y<=0||y<n){
        *returnSize=0;
        return res;
    }

    y-=n;
    for(int i=0;i<n;i++){
        if(y>=5){
            res[i]=6;
            y-=5;
        }
        else{
            res[i]=1+y;
            y=0;
        }
    }
    *returnSize =n;
    return res;
}