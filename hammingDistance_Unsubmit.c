int hammingDistance(int x, int y) {
    x=x^y;
    unsigned count=0;
    while(x){
        count++;
        x=x&(x-1);
    }
    return count;
}
