class Box {
    private:
       int length;
       int width;
       int height;
    public:

    void setDetails(int h, int l, int w);
    int getHeight();
    int getWidth();
    int getLength();
    int calcVolume();
};
