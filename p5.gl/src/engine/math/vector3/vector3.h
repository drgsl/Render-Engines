
namespace math
{
  class Vector3
  {
  public:
    double x, y, z, w;
    static Vector3 zero;
    static Vector3  one;
    // static Vector3 random;


      /**
       * \brief Default constructor initializing vector to (0,0,0,1).
       */
    Vector3();

      /**
       * \brief Parameterized constructor for initializing vector components.
       *
       * \param _x X component.
       * \param _y Y component (default is 0.0).
       * \param _z Z component (default is 0.0).
       * \param _w W component (default is 1.0).
       */
    Vector3(double _x, double _y = 0.0f, double _z = 0.0f, double _w = 1.0f);

    Vector3& operator=(const Vector3& other);
    Vector3& operator+=(const Vector3& other);
    Vector3& operator*=(double scalar);
    Vector3 operator*(double scalar) const;
    Vector3 operator-(const Vector3& other) const; 
    Vector3 operator+(const Vector3& other) const; 
    double dot(const Vector3& other) const;
    Vector3 operator/(double scalar) const;

    double distance(const Vector3& other) const ;
  };

  // Vector3 Vector3::zero = Vector3(0, 0, 0, 1);
  // Vector3 Vector3::one  = Vector3(1, 1, 1, 1);

  

}