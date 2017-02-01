#include <iostream>
#include <cstdio>

#include "Materials/concrete.h"
#include "Materials/steel.h"
#include "Shapes/circle.h"
#include "Shapes/rectangle.h"
#include "Utils/logger.h"
#include "Utils/myTime.h"
#include "Algorithms/tensionCounters.h"


int main(int argc, char** argv)
{
    MyTime time;
    
    //Logger().Get() << "Ola";

    try
    {
        // Steel parameters definition
        CivilNS::Steel mat_param = CivilNS::Steel("A-0");
        std::cout << mat_param.getCharacteristicStrength() << std::endl;

        // Concrete parameters definition
        CivilNS::Concrete conc_param = CivilNS::Concrete("C16/20");
        std::cout << conc_param.getCharacteristicStrength() << std::endl;

        // Shape definition
        Shapes::Rectangle rectangle = Shapes::Rectangle(10, 20);

        std::cout << CivilNS::madridParabolaPlot(conc_param, 0.010) << std::endl;

        // Column material definition
//        CivilNS::Concrete concrete = CivilNS::Concrete("C16/20");
//        CivilNS::Steel steel = CivilNS::Steel("A-IIIN");
    }
    catch (const CivilNS::ExceptionMaterialParams& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    //cin.get();
}
