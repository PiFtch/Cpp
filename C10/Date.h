class Date {
    public:
        Date(int year, int month, int day);
        int getYear();
        void setYear(int year);
    
    private:
        int year, month, day;
};