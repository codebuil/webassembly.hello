const char *hello=" this is a scroll message.\0\0\0\0\0\0";
char *mems="";
const char* hello_world() {
    if(mems[0]==0)mems=hello;
    mems=mems+1;
    return mems;
}