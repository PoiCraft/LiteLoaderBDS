// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Global.h"
#include "../third-party/Nlohmann/fifo_json.hpp"
#include <map>
#include <string>
#include <vector>

class EndTag;
class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;
class CompoundTagVariant;
class Player;
class Actor;
class Block;
class ItemStack;
class BlockActor;

#undef BEFORE_EXTRA

class Tag {

#define AFTER_EXTRA
// Add Member There
private:

public:
    enum Type : uint8_t {
        End,
        Byte,
        Short,
        Int,
        Int64,
        Float,
        Double,
        ByteArray,
        String,
        List,
        Compound,
        IntArray,
    };

    LIAPI Type getTagType() const;

    //value
    //LIAPI char& asByte();
    //LIAPI short& asShort();
    //LIAPI int& asInt();
    //LIAPI __int64& asLong();
    //LIAPI float& asFloat();
    //LIAPI double& asDouble();
    //LIAPI std::string& asString();
    //LIAPI std::vector<Tag*>& asList();
    //LIAPI std::map<std::string, char[0x28]>& asCompound();
    //LIAPI TagMemoryChunk& asByteArray();

    LIAPI EndTag* asEndTag();
    LIAPI ByteTag* asByteTag();
    LIAPI ShortTag* asShortTag();
    LIAPI IntTag* asIntTag();
    LIAPI Int64Tag* asInt64Tag();
    LIAPI FloatTag* asFloatTag();
    LIAPI DoubleTag* asDoubleTag();
    LIAPI StringTag* asStringTag();
    LIAPI ListTag* asListTag();
    LIAPI CompoundTag* asCompoundTag();
    LIAPI ByteArrayTag* asByteArrayTag();
    LIAPI IntArrayTag* asIntArrayTag();

    LIAPI void destroy();

//static

    LIAPI std::string toJson(int formatIndent);

    template <typename T>
    inline static std::unique_ptr<Tag> asTag(std::unique_ptr<T>&& tag)
    {
        return std::unique_ptr<Tag>((Tag*)(tag.release()));
    }
    template <typename T>
    inline static std::unique_ptr<T> asTypedTag(std::unique_ptr<Tag> tag)
    {
        return std::unique_ptr<T>((T*)(tag.release()));
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAG
public:
    class Tag& operator=(class Tag const &) = delete;
    Tag(class Tag const &) = delete;
#endif


public:
    /*0*/ virtual ~Tag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput &) const = 0;
    /*3*/ virtual void load(class IDataInput &) = 0;
    /*4*/ virtual std::string toString() const = 0;
    /*5*/ virtual enum Tag::Type getId() const = 0;
    /*6*/ virtual bool equals(class Tag const &) const;
    /*7*/ virtual void print(class PrintStream &) const;
    /*8*/ virtual void print(std::string const &, class PrintStream &) const;
    /*9*/ virtual std::unique_ptr<class Tag> copy() const = 0;
    /*10*/ virtual unsigned __int64 hash() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAG
public:
#endif
    MCAPI static std::string const NullString;
    MCAPI static std::string getTagName(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> newTag(enum Tag::Type);
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput &, std::string &);
    MCAPI static void writeNamedTag(std::string const &, class Tag const &, class IDataOutput &);

//protected:
    MCAPI Tag();

protected:


};