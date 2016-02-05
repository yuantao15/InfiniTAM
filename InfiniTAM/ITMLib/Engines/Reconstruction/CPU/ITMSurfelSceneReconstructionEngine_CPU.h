// Copyright 2014-2015 Isis Innovation Limited and the authors of InfiniTAM

#pragma once

#include "../Interface/ITMSurfelSceneReconstructionEngine.h"

namespace ITMLib
{
  /**
   * \brief An instance of an instantiation of this class template can be used to make a surfel-based reconstruction of a 3D scene using the CPU.
   */
  template <typename TSurfel>
  class ITMSurfelSceneReconstructionEngine_CPU : public ITMSurfelSceneReconstructionEngine<TSurfel>
  {
    //#################### CONSTRUCTORS ####################
  public:
    /**
     * \brief TODO
     */
    explicit ITMSurfelSceneReconstructionEngine_CPU(const Vector2i& depthImageSize);

    //#################### PRIVATE MEMBER FUNCTIONS ####################
  private:
    /** Override */
    virtual void AddNewSurfels(ITMSurfelScene<TSurfel> *scene, const ITMView *view, const ITMTrackingState *trackingState) const;

    /** Override */
    virtual void FindCorrespondingSurfels(const ITMSurfelScene<TSurfel> *scene, const ITMView *view, const ITMTrackingState *trackingState,
                                          const ITMSurfelRenderState *renderState) const;

    /** Override */
    virtual void FuseMatchedPoints(ITMSurfelScene<TSurfel> *scene, const ITMView *view, const ITMTrackingState *trackingState) const;

    /** Override */
    virtual void MarkBadSurfels(ITMSurfelScene<TSurfel> *scene) const;

    /** Override */
    virtual void MergeSimilarSurfels(ITMSurfelScene<TSurfel> *scene) const;

    /** Override */
    virtual void PreprocessDepthMap(const ITMView *view) const;

    /** Override */
    virtual void RemoveMarkedSurfels(ITMSurfelScene<TSurfel> *scene) const;
  };
}
