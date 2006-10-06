#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackExtra.h"
#include "DataFormats/TrackReco/interface/GsfTrack.h"
#include "DataFormats/TrackReco/interface/GsfTrackExtra.h"
// #include "DataFormats/TrackReco/interface/GsfComponent5D.h"
#include <vector>

namespace {
  namespace {
    reco::TrackExtraCollection v3;
    edm::Wrapper<reco::TrackExtraCollection> c3;
    edm::Ref<reco::TrackExtraCollection> r3;
    edm::RefProd<reco::TrackExtraCollection> rp3;
    edm::RefVector<reco::TrackExtraCollection> rv3;

    reco::TrackCollection v1;
    edm::Wrapper<reco::TrackCollection> c1;
    edm::Ref<reco::TrackCollection> r1;
    edm::RefProd<reco::TrackCollection> rp1;
    edm::RefVector<reco::TrackCollection> rv1;

    reco::GsfTrackExtraCollection v4;
    edm::Wrapper<reco::GsfTrackExtraCollection> c4;
    edm::Ref<reco::GsfTrackExtraCollection> r4;
    edm::RefProd<reco::GsfTrackExtraCollection> rp4;
    edm::RefVector<reco::GsfTrackExtraCollection> rv4;

    reco::GsfTrackCollection v2;
    edm::Wrapper<reco::GsfTrackCollection> c2;
    edm::Ref<reco::GsfTrackCollection> r2;
    edm::RefProd<reco::GsfTrackCollection> rp2;
    edm::RefVector<reco::GsfTrackCollection> rv2;

//     reco::GsfComponent5D s5;
  }
}
