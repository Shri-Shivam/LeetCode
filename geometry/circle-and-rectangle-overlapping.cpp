class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xclosest=0;
      if(xCenter<x1)
      {
         xclosest=x1;
      }
      else if(xCenter>x2)
      {
           xclosest=x2;
      }
      else{
        xclosest=xCenter;
      }
     int yclosest;
      if(yCenter<y1)
      {
        yclosest=y1;
      }
      else if(yCenter>y2)
      {
           yclosest=y2;
      }
      else{
        yclosest=yCenter;
      }
      int dx = xclosest - xCenter;
      int dy = yclosest - yCenter;
      int distance = dx * dx + dy * dy;
      if(distance<=radius*radius)
      {
        return true;
      }
     return false;
    }
};