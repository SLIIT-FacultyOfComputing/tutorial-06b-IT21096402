class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
       void setlength(double l);
       void setwidth(double w);
       void setheight(double h);

       double getLength();
       double getWidth();
       double getHeight();
       int calcVolume();
};
