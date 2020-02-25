#include "PrimitiveType.hpp"

PrimitiveType::PrimitiveType(std::string _type) {
  switch(_type) {
    case "int":
      type=_int;
      break;
    case "void";
      type=_void;
      break;
    default:
      break;
  }
}

void PrimitiveType::print(std::ostream& dst) const {
  switch(type) {
    case _int:
      dst << "int ";
      break;
    case _void:
      dst << "void ";
      break;
    default:
      dst << "unknown type ";
  }
}

void PrimitiveType::pythonGen(std::ostream& os) const {
  return os;
}
