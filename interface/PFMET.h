#ifndef METReco_PFMET_h
#define METReco_PFMET_h

/*
class: PFMET
description:  MET made from Particle Flow candidates
author: R. Cavanaugh
date: 10/27/08
*/

#include "DataFormats/METReco/interface/MET.h"
#include "DataFormats/METReco/interface/CorrMetData.h"

namespace reco
{
  class PFMET:  public MET {
  public:
    PFMET() {}
    virtual ~PFMET() {}
    
    //getters
    double NeutralEMFraction() const { return pf_data.NeutralEMFraction; }
    double NeutralHadFraction() const { return pf_data.NeutralHadFraction; }
    double ChargedEMFraction() const { return pf_data.ChargedEMFraction; }
    double ChargedHadFraction() const { return pf_data.ChargedHadFraction; }
    

    // block accessors
    SpecificPFMETData getSpecific() const {return pf_data;}
   

  private:
    SpecificPFMETData pf_data;
  };
}
#endif
