//===-- sanitizer_coverage_interface.inc ----------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
// Sanitizer Coverage interface list.
//===----------------------------------------------------------------------===//
INTERFACE_FUNCTION(__sanitizer_cov)
INTERFACE_FUNCTION(__sanitizer_cov_dump)
INTERFACE_FUNCTION(__sanitizer_cov_indir_call16)
INTERFACE_FUNCTION(__sanitizer_cov_init)
INTERFACE_FUNCTION(__sanitizer_cov_module_init)
INTERFACE_FUNCTION(__sanitizer_cov_trace_basic_block)
INTERFACE_FUNCTION(__sanitizer_cov_trace_func_enter)
INTERFACE_FUNCTION(__sanitizer_cov_with_check)
INTERFACE_FUNCTION(__sanitizer_dump_coverage)
INTERFACE_FUNCTION(__sanitizer_dump_trace_pc_guard_coverage)
INTERFACE_FUNCTION(__sanitizer_get_coverage_guards)
INTERFACE_FUNCTION(__sanitizer_get_number_of_counters)
INTERFACE_FUNCTION(__sanitizer_get_total_unique_caller_callee_pairs)
INTERFACE_FUNCTION(__sanitizer_get_total_unique_coverage)
INTERFACE_FUNCTION(__sanitizer_maybe_open_cov_file)
INTERFACE_FUNCTION(__sanitizer_reset_coverage)
INTERFACE_FUNCTION(__sanitizer_update_counter_bitset_and_clear_counters)
INTERFACE_WEAK_FUNCTION(__sancov_default_options)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_cmp)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_cmp1)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_cmp2)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_cmp4)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_cmp8)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_div4)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_div8)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_gep)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_pc_guard)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_pc_guard_init)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_pc_indir)
INTERFACE_WEAK_FUNCTION(__sanitizer_cov_trace_switch)
