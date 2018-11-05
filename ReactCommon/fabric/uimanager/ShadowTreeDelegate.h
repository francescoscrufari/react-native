// Copyright (c) Facebook, Inc. and its affiliates.

// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <fabric/uimanager/ShadowViewMutation.h>

namespace facebook {
namespace react {

class ShadowTree;

/*
 * Abstract class for ShadowTree's delegate.
 */
class ShadowTreeDelegate {
 public:
  /*
   * Called right after Shadow Tree commit a new state of the the tree.
   */
  virtual void shadowTreeDidCommit(
      const ShadowTree &shadowTree,
      const ShadowViewMutationList &mutations) const = 0;

  virtual ~ShadowTreeDelegate() noexcept = default;
};

} // namespace react
} // namespace facebook