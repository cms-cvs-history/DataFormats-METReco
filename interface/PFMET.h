#ifndef METReco_PFMET_h
#define METReco_PFMET_h

/*
class: PFMET
description:  MET made from Particle Flow candidates
author: R. Cavanaugh
date: 10/27/08
*/

#include "DataFormats/METReco/interface/MET.h"
#include "DataFormats/METReco/interface/SpecificPFMETData.h"
namespace reco
{
  class PFMET:  public MET {
  public:
    PFMET() {}
    PFMET( SpecificPFMETData calo_data_, double sumet_,
	     const LorentzVector& fP4, const Point& fVertex )
      : MET( sumet_, fP4, fVertex ), pf_data( pf_data ) {}

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
