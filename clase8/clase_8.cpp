#include <iostream>

namespace Espacio1 {
    const double PI = 3.1416;
}

namespace Espacio2 {
    const double PI = 3.1515926535;
}

namespace Constantes {
    namespace Matematicas {
        const double PI = 3.14;
    }
}

namespace Constantes2 {
    namespace Matematicas {
        namespace Areas {
            const double PI = 3.14;
        }
    }
}

using namespace Espacio1;
using namespace Espacio2;

int main() {

    double miPi = Espacio1::PI;
    double miOtroPi = Espacio2::PI;
    double miPIAnidado = Constantes::Matematicas::PI;
    double miPIDoubleAniddado = Constantes2::Matematicas::Areas::PI;

    return 0;
}