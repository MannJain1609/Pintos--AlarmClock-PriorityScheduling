/* GDB Notifications to Observers.

   Copyright (C) 2004-2015 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   --

   This file was generated using observer.sh and observer.texi.  */

#ifndef OBSERVER_H
#define OBSERVER_H

struct observer;
struct bpstats;
struct so_list;
struct objfile;
struct thread_info;
struct inferior;
struct trace_state_variable;

/* normal_stop notifications.  */

typedef void (observer_normal_stop_ftype) (struct bpstats *bs, int print_frame);

extern struct observer *observer_attach_normal_stop (observer_normal_stop_ftype *f);
extern void observer_detach_normal_stop (struct observer *observer);
extern void observer_notify_normal_stop (struct bpstats *bs, int print_frame);

/* signal_received notifications.  */

typedef void (observer_signal_received_ftype) (enum gdb_signal siggnal);

extern struct observer *observer_attach_signal_received (observer_signal_received_ftype *f);
extern void observer_detach_signal_received (struct observer *observer);
extern void observer_notify_signal_received (enum gdb_signal siggnal);

/* end_stepping_range notifications.  */

typedef void (observer_end_stepping_range_ftype) (void);

extern struct observer *observer_attach_end_stepping_range (observer_end_stepping_range_ftype *f);
extern void observer_detach_end_stepping_range (struct observer *observer);
extern void observer_notify_end_stepping_range (void);

/* signal_exited notifications.  */

typedef void (observer_signal_exited_ftype) (enum gdb_signal siggnal);

extern struct observer *observer_attach_signal_exited (observer_signal_exited_ftype *f);
extern void observer_detach_signal_exited (struct observer *observer);
extern void observer_notify_signal_exited (enum gdb_signal siggnal);

/* exited notifications.  */

typedef void (observer_exited_ftype) (int exitstatus);

extern struct observer *observer_attach_exited (observer_exited_ftype *f);
extern void observer_detach_exited (struct observer *observer);
extern void observer_notify_exited (int exitstatus);

/* no_history notifications.  */

typedef void (observer_no_history_ftype) (void);

extern struct observer *observer_attach_no_history (observer_no_history_ftype *f);
extern void observer_detach_no_history (struct observer *observer);
extern void observer_notify_no_history (void);

/* sync_execution_done notifications.  */

typedef void (observer_sync_execution_done_ftype) (void);

extern struct observer *observer_attach_sync_execution_done (observer_sync_execution_done_ftype *f);
extern void observer_detach_sync_execution_done (struct observer *observer);
extern void observer_notify_sync_execution_done (void);

/* command_error notifications.  */

typedef void (observer_command_error_ftype) (void);

extern struct observer *observer_attach_command_error (observer_command_error_ftype *f);
extern void observer_detach_command_error (struct observer *observer);
extern void observer_notify_command_error (void);

/* target_changed notifications.  */

typedef void (observer_target_changed_ftype) (struct target_ops *target);

extern struct observer *observer_attach_target_changed (observer_target_changed_ftype *f);
extern void observer_detach_target_changed (struct observer *observer);
extern void observer_notify_target_changed (struct target_ops *target);

/* executable_changed notifications.  */

typedef void (observer_executable_changed_ftype) (void);

extern struct observer *observer_attach_executable_changed (observer_executable_changed_ftype *f);
extern void observer_detach_executable_changed (struct observer *observer);
extern void observer_notify_executable_changed (void);

/* inferior_created notifications.  */

typedef void (observer_inferior_created_ftype) (struct target_ops *objfile, int from_tty);

extern struct observer *observer_attach_inferior_created (observer_inferior_created_ftype *f);
extern void observer_detach_inferior_created (struct observer *observer);
extern void observer_notify_inferior_created (struct target_ops *objfile, int from_tty);

/* record_changed notifications.  */

typedef void (observer_record_changed_ftype) (struct inferior *inferior, int started);

extern struct observer *observer_attach_record_changed (observer_record_changed_ftype *f);
extern void observer_detach_record_changed (struct observer *observer);
extern void observer_notify_record_changed (struct inferior *inferior, int started);

/* solib_loaded notifications.  */

typedef void (observer_solib_loaded_ftype) (struct so_list *solib);

extern struct observer *observer_attach_solib_loaded (observer_solib_loaded_ftype *f);
extern void observer_detach_solib_loaded (struct observer *observer);
extern void observer_notify_solib_loaded (struct so_list *solib);

/* solib_unloaded notifications.  */

typedef void (observer_solib_unloaded_ftype) (struct so_list *solib);

extern struct observer *observer_attach_solib_unloaded (observer_solib_unloaded_ftype *f);
extern void observer_detach_solib_unloaded (struct observer *observer);
extern void observer_notify_solib_unloaded (struct so_list *solib);

/* new_objfile notifications.  */

typedef void (observer_new_objfile_ftype) (struct objfile *objfile);

extern struct observer *observer_attach_new_objfile (observer_new_objfile_ftype *f);
extern void observer_detach_new_objfile (struct observer *observer);
extern void observer_notify_new_objfile (struct objfile *objfile);

/* free_objfile notifications.  */

typedef void (observer_free_objfile_ftype) (struct objfile *objfile);

extern struct observer *observer_attach_free_objfile (observer_free_objfile_ftype *f);
extern void observer_detach_free_objfile (struct observer *observer);
extern void observer_notify_free_objfile (struct objfile *objfile);

/* new_thread notifications.  */

typedef void (observer_new_thread_ftype) (struct thread_info *t);

extern struct observer *observer_attach_new_thread (observer_new_thread_ftype *f);
extern void observer_detach_new_thread (struct observer *observer);
extern void observer_notify_new_thread (struct thread_info *t);

/* thread_exit notifications.  */

typedef void (observer_thread_exit_ftype) (struct thread_info *t, int silent);

extern struct observer *observer_attach_thread_exit (observer_thread_exit_ftype *f);
extern void observer_detach_thread_exit (struct observer *observer);
extern void observer_notify_thread_exit (struct thread_info *t, int silent);

/* thread_stop_requested notifications.  */

typedef void (observer_thread_stop_requested_ftype) (ptid_t ptid);

extern struct observer *observer_attach_thread_stop_requested (observer_thread_stop_requested_ftype *f);
extern void observer_detach_thread_stop_requested (struct observer *observer);
extern void observer_notify_thread_stop_requested (ptid_t ptid);

/* target_resumed notifications.  */

typedef void (observer_target_resumed_ftype) (ptid_t ptid);

extern struct observer *observer_attach_target_resumed (observer_target_resumed_ftype *f);
extern void observer_detach_target_resumed (struct observer *observer);
extern void observer_notify_target_resumed (ptid_t ptid);

/* about_to_proceed notifications.  */

typedef void (observer_about_to_proceed_ftype) (void);

extern struct observer *observer_attach_about_to_proceed (observer_about_to_proceed_ftype *f);
extern void observer_detach_about_to_proceed (struct observer *observer);
extern void observer_notify_about_to_proceed (void);

/* breakpoint_created notifications.  */

typedef void (observer_breakpoint_created_ftype) (struct breakpoint *b);

extern struct observer *observer_attach_breakpoint_created (observer_breakpoint_created_ftype *f);
extern void observer_detach_breakpoint_created (struct observer *observer);
extern void observer_notify_breakpoint_created (struct breakpoint *b);

/* breakpoint_deleted notifications.  */

typedef void (observer_breakpoint_deleted_ftype) (struct breakpoint *b);

extern struct observer *observer_attach_breakpoint_deleted (observer_breakpoint_deleted_ftype *f);
extern void observer_detach_breakpoint_deleted (struct observer *observer);
extern void observer_notify_breakpoint_deleted (struct breakpoint *b);

/* breakpoint_modified notifications.  */

typedef void (observer_breakpoint_modified_ftype) (struct breakpoint *b);

extern struct observer *observer_attach_breakpoint_modified (observer_breakpoint_modified_ftype *f);
extern void observer_detach_breakpoint_modified (struct observer *observer);
extern void observer_notify_breakpoint_modified (struct breakpoint *b);

/* traceframe_changed notifications.  */

typedef void (observer_traceframe_changed_ftype) (int tfnum, int tpnum);

extern struct observer *observer_attach_traceframe_changed (observer_traceframe_changed_ftype *f);
extern void observer_detach_traceframe_changed (struct observer *observer);
extern void observer_notify_traceframe_changed (int tfnum, int tpnum);

/* architecture_changed notifications.  */

typedef void (observer_architecture_changed_ftype) (struct gdbarch *newarch);

extern struct observer *observer_attach_architecture_changed (observer_architecture_changed_ftype *f);
extern void observer_detach_architecture_changed (struct observer *observer);
extern void observer_notify_architecture_changed (struct gdbarch *newarch);

/* thread_ptid_changed notifications.  */

typedef void (observer_thread_ptid_changed_ftype) (ptid_t old_ptid, ptid_t new_ptid);

extern struct observer *observer_attach_thread_ptid_changed (observer_thread_ptid_changed_ftype *f);
extern void observer_detach_thread_ptid_changed (struct observer *observer);
extern void observer_notify_thread_ptid_changed (ptid_t old_ptid, ptid_t new_ptid);

/* inferior_added notifications.  */

typedef void (observer_inferior_added_ftype) (struct inferior *inf);

extern struct observer *observer_attach_inferior_added (observer_inferior_added_ftype *f);
extern void observer_detach_inferior_added (struct observer *observer);
extern void observer_notify_inferior_added (struct inferior *inf);

/* inferior_appeared notifications.  */

typedef void (observer_inferior_appeared_ftype) (struct inferior *inf);

extern struct observer *observer_attach_inferior_appeared (observer_inferior_appeared_ftype *f);
extern void observer_detach_inferior_appeared (struct observer *observer);
extern void observer_notify_inferior_appeared (struct inferior *inf);

/* inferior_exit notifications.  */

typedef void (observer_inferior_exit_ftype) (struct inferior *inf);

extern struct observer *observer_attach_inferior_exit (observer_inferior_exit_ftype *f);
extern void observer_detach_inferior_exit (struct observer *observer);
extern void observer_notify_inferior_exit (struct inferior *inf);

/* inferior_removed notifications.  */

typedef void (observer_inferior_removed_ftype) (struct inferior *inf);

extern struct observer *observer_attach_inferior_removed (observer_inferior_removed_ftype *f);
extern void observer_detach_inferior_removed (struct observer *observer);
extern void observer_notify_inferior_removed (struct inferior *inf);

/* memory_changed notifications.  */

typedef void (observer_memory_changed_ftype) (struct inferior *inferior, CORE_ADDR addr, ssize_t len, const bfd_byte *data);

extern struct observer *observer_attach_memory_changed (observer_memory_changed_ftype *f);
extern void observer_detach_memory_changed (struct observer *observer);
extern void observer_notify_memory_changed (struct inferior *inferior, CORE_ADDR addr, ssize_t len, const bfd_byte *data);

/* before_prompt notifications.  */

typedef void (observer_before_prompt_ftype) (const char *current_prompt);

extern struct observer *observer_attach_before_prompt (observer_before_prompt_ftype *f);
extern void observer_detach_before_prompt (struct observer *observer);
extern void observer_notify_before_prompt (const char *current_prompt);

/* gdb_datadir_changed notifications.  */

typedef void (observer_gdb_datadir_changed_ftype) (void);

extern struct observer *observer_attach_gdb_datadir_changed (observer_gdb_datadir_changed_ftype *f);
extern void observer_detach_gdb_datadir_changed (struct observer *observer);
extern void observer_notify_gdb_datadir_changed (void);

/* command_param_changed notifications.  */

typedef void (observer_command_param_changed_ftype) (const char *param, const char *value);

extern struct observer *observer_attach_command_param_changed (observer_command_param_changed_ftype *f);
extern void observer_detach_command_param_changed (struct observer *observer);
extern void observer_notify_command_param_changed (const char *param, const char *value);

/* tsv_created notifications.  */

typedef void (observer_tsv_created_ftype) (const struct trace_state_variable *tsv);

extern struct observer *observer_attach_tsv_created (observer_tsv_created_ftype *f);
extern void observer_detach_tsv_created (struct observer *observer);
extern void observer_notify_tsv_created (const struct trace_state_variable *tsv);

/* tsv_deleted notifications.  */

typedef void (observer_tsv_deleted_ftype) (const struct trace_state_variable *tsv);

extern struct observer *observer_attach_tsv_deleted (observer_tsv_deleted_ftype *f);
extern void observer_detach_tsv_deleted (struct observer *observer);
extern void observer_notify_tsv_deleted (const struct trace_state_variable *tsv);

/* tsv_modified notifications.  */

typedef void (observer_tsv_modified_ftype) (const struct trace_state_variable *tsv);

extern struct observer *observer_attach_tsv_modified (observer_tsv_modified_ftype *f);
extern void observer_detach_tsv_modified (struct observer *observer);
extern void observer_notify_tsv_modified (const struct trace_state_variable *tsv);

/* inferior_call_pre notifications.  */

typedef void (observer_inferior_call_pre_ftype) (ptid_t thread, CORE_ADDR address);

extern struct observer *observer_attach_inferior_call_pre (observer_inferior_call_pre_ftype *f);
extern void observer_detach_inferior_call_pre (struct observer *observer);
extern void observer_notify_inferior_call_pre (ptid_t thread, CORE_ADDR address);

/* inferior_call_post notifications.  */

typedef void (observer_inferior_call_post_ftype) (ptid_t thread, CORE_ADDR address);

extern struct observer *observer_attach_inferior_call_post (observer_inferior_call_post_ftype *f);
extern void observer_detach_inferior_call_post (struct observer *observer);
extern void observer_notify_inferior_call_post (ptid_t thread, CORE_ADDR address);

/* register_changed notifications.  */

typedef void (observer_register_changed_ftype) (struct frame_info *frame, int regnum);

extern struct observer *observer_attach_register_changed (observer_register_changed_ftype *f);
extern void observer_detach_register_changed (struct observer *observer);
extern void observer_notify_register_changed (struct frame_info *frame, int regnum);

/* test_notification notifications.  */

typedef void (observer_test_notification_ftype) (int somearg);

extern struct observer *observer_attach_test_notification (observer_test_notification_ftype *f);
extern void observer_detach_test_notification (struct observer *observer);
extern void observer_notify_test_notification (int somearg);

#endif /* OBSERVER_H */
