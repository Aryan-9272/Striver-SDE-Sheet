vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    long long diff=0,sq_diff=0;
    for(int i=0;i<n;i++){
        diff+=i+1-A[i];
        sq_diff+=(long)(i+1)*(i+1)-(long)A[i]*A[i];
    }
    long long add=sq_diff/diff;
    long long x=(add+diff)/2;
    long long y=add-x;
    return {y,x};
}
