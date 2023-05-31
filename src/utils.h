#include <unordered_map>
#include <string>

/* SC says:
todo:
* - get pointers for being in a pursuit when in career [1]
* -- get pointers for heat level [X]
* - get pointers for being in circuits, sprints, checkpoints, tollbooths, speedtraps, drag and KOs [2]
* -- get pointers for lap no. and percent through, updating every few seconds or so [3]
* - get pointers for general location of player in Rockport [4]
? - SC: where do get these pointers from? i dunno lol
*/

namespace utils {
  const int*  const C_CAR_PTR     = (int*)  0x009BA088; //* - SC: CURRENT CAR POINTER
  const int*  const CARS_ADDR_PTR = (int*)  0x009B09D8; //* - SC: CARS ADDRESSES POINTER(?) 
  const int*  const OPT_ADDR_PTR  = (int*)  0x0091CF90; //* - SC: OPTIONS ADDRESSES POINTER (?) (originally PRT... nice lol)
                                                        //? ^ SC: assumptions based off of name and scheme; not sure where to find these in NFS-VltEd. is correct tool? idk.
  const int*  const HEAT_PTR      = (int*)  0x00589088; //* - SC: made this; HEAT POINTER -- offset 104



  std::unordered_map<std::string, const char*> CAR_TABLE = {
    {"997S", "Porsche 911 Carrera S"},
    {"IS300", "Lexus IS 300"},
    {"PUNTO", "Fiat Grande Punto"},
    {"COBALTSS", "Chevrolet Cobalt SS"},
    {"GTI", "Volkswagen Golf GTI"},
    {"TT", "Audi TT 3.2 Quattro"},
    {"A3", "Audi A3 3.2 Quattro"},
    {"ECLIPSEGT", "Mitsubishi Eclipse GT"},
    {"A4", "Audi A4 3.2 FSI Quattro"},
    {"SUPRA", "Toyota Supra RZ"},
    {"CLIO", "Renault Clio V6 RS"},
    {"RX8", "Mazda RX-8"},
    {"RX7", "Mazda RX-7"},
    {"CTS", "Cadillac CTS"},
    {"MUSTANGGT", "Ford Mustang GT"}, //! - SC: spelling error? or critical issue? idk, come back to later
    {"LANCEREVO8", "Mitsubishi Lancer Evolution VIII"},
    {"SL500", "Mercedes-Benz SL 500"},
    {"GTO", "Pontiac GTO"},
    {"MONARO", "Vauxhall Monaro VXR"},
    {"CAYMANS", "Porsche Cayman S"},
    {"IMPREZAWRX", "Subaru Impreza WRX STi"},
    {"CLK500", "Mercedes-Benz CLK 500"},
    {"ELISE", "Lotus Elise 111R"},
    {"DB9", "Aston Martin DB9"},
    {"VIPER", "Dodge Viper SRT-10"},
    {"GALLARDO", "Lamborghini Gallardo"},
    {"911TURBO", "Porsche 911 Turbo S"},
    {"CORVETTE", "Chevrolet Corvette"},
    {"MURCIELAGO", "Lamborghini Murciélago"},
    {"FORDGT", "Ford GT"}, //* - SC: same as seen in line 34
    {"SLR", "Mercedes-Benz SLR McLaren"},
    {"CARRERAGT", "Porsche Carrera GT"},
    {"BMWM3GTRE46", "BMW M3 GTR"},
  };
}
