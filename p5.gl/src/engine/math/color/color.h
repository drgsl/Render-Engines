

namespace math
{

class Color
  {
  public:
    float r, g, b, a;
    /* 4bit color support */
    static Color black;
    static Color white;
    static Color red;
    static Color green;
    static Color blue;
    static Color yellow;
    static Color cyan;
    static Color magenta;
    static Color gray;
    static Color darkGray;
    static Color lightGray;
    static Color darkRed;
    static Color darkGreen;
    static Color darkBlue;
    static Color brown;
    static Color orange;


     /**
     * \brief Default constructor initializing color to white (1.0, 1.0, 1.0, 1.0).
     */
    Color(); 

      /**
       * \brief Constructor for grayscale color.
       *
       * \param _value Grayscale value.
       */
    Color(double _value);
      /**
       * \brief Constructor for RGB color.
       *
       * \param _r Red component.
       * \param _g Green component.
       * \param _b Blue component.
       */
    Color(double _r, double _g, double _b);

      /**
       * \brief Main constructor for RGBA color.
       *
       * \param _r Red component.
       * \param _g Green component.
       * \param _b Blue component.
       * \param _a Alpha component.
       */
    Color(double _r, double _g, double _b, double _a);
  };


  
    
}