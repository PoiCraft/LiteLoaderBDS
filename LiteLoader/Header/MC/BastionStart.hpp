// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BastionStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONSTART
public:
    class BastionStart& operator=(class BastionStart const&) = delete;
    BastionStart(class BastionStart const&) = delete;
    BastionStart() = delete;
#endif

public:
    /*0*/ virtual ~BastionStart();
    /*
    inline enum StructureFeatureType getType() const{
        enum StructureFeatureType (BastionStart::*rv)() const;
        *((void**)&rv) = dlsym("?getType@BastionStart@@UEBA?AW4StructureFeatureType@@XZ");
        return (this->*rv)();
    }
    inline bool isValid() const{
        bool (BastionStart::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@BastionStart@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool postProcess(class BlockSource& a0, class Random& a1, class BoundingBox const& a2){
        bool (BastionStart::*rv)(class BlockSource&, class Random&, class BoundingBox const&);
        *((void**)&rv) = dlsym("?postProcess@BastionStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class Random&>(a1), std::forward<class BoundingBox const&>(a2));
    }
    */

protected:

private:

};