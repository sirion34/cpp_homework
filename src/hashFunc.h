template <typename Type>
int getHash(Type data);
template <>
int getHash<std::string>(const std::string data);
