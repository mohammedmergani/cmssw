#ifndef FWCore_Sources_ExternalInputSource_h
#define FWCore_Sources_ExternalInputSource_h

/*----------------------------------------------------------------------
$Id: ExternalInputSource.h,v 1.1 2007/05/01 20:21:56 wmtan Exp $
----------------------------------------------------------------------*/

#include <memory>
#include <vector>
#include <string>

#include "FWCore/Framework/interface/ConfigurableInputSource.h"
#include "FWCore/Catalog/interface/FileCatalog.h"

namespace edm {
  class ExternalInputSource : public ConfigurableInputSource {
  public:
    explicit ExternalInputSource(ParameterSet const& pset, InputSourceDescription const& desc);
    virtual ~ExternalInputSource();

  std::vector<std::string> const& logicalFileNames() const {return catalog_.logicalFileNames();}
  std::vector<std::string> const& fileNames() const {return catalog_.fileNames();}
  InputFileCatalog& catalog() {return catalog_;}


  private:
    InputFileCatalog catalog_;
  };
}
#endif
