class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
  private:
    int StudentId;
    char Name[20];
  public:
    void assignDetails(int SID, const char SName[]);
    void display();
};
