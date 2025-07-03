#ifndef PAIR_H
#define PAIR_H

template <typename K, typename V>
class Pair
{
public:
    Pair() = default;
    Pair(K key, V value);
    // This is an inline constructor.

    K getKey() const;
    V getValue() const;
    K setKey();
    V setValue();

private:
    K key;
    V value;
};

// When defining a class template, there is a limitation that we have to define its methods in the class definition only.
// We cannot define them in implementation file (Pair.cpp).

template <typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key(key), value(value){};
// Here, we have defined the constructor outside the class definition but inside the header file.
// Firstly, we have written class name with the types of its attributes in <>.
// Then using :: operator, we have defined the constructor.
// Above the definition of constructor, we write the template declaration.

template <typename K, typename V>
K Pair<K, V>::getKey() const
{
    return key;
}

template <typename K, typename V>
V Pair<K, V>::getValue() const
{
    return value;
}

template <typename K, typename V>
K Pair<K, V>::setKey()
{
    this->key = key;
}

template <typename K, typename V>
inline V Pair<K, V>::setValue()
{
    this->value = value;
}

#endif
