class Rectangle 
{
private:
double length;
double width;

public:
Rectangle ();
Rectangle (double len, double wid);
double getLength () const;
double getWidth () const;

void setLength (double l);
void setWidth (double w);
double getArea () const;
double getPerimeter () const;
void displayStatistics () const;


};