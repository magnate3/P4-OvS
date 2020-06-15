#include <config.h>
#include <stdio.h>
#include <PI/target/pi_tables_imp.h>

pi_status_t _pi_table_entry_add(pi_session_handle_t session_handle,
                                pi_dev_tgt_t dev_tgt, pi_p4_id_t table_id,
                                const pi_match_key_t *match_key,
                                const pi_table_entry_t *table_entry,
                                int overwrite,
                                pi_entry_handle_t *entry_handle) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)match_key;
    (void)table_entry;
    (void)overwrite;
    (void)entry_handle;
    printf("Adding entry to P4-OvS");
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_default_action_set(pi_session_handle_t session_handle,
                                         pi_dev_tgt_t dev_tgt,
                                         pi_p4_id_t table_id,
                                         const pi_table_entry_t *table_entry) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)table_entry;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_default_action_reset(pi_session_handle_t session_handle,
                                           pi_dev_tgt_t dev_tgt,
                                           pi_p4_id_t table_id) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_default_action_get(pi_session_handle_t session_handle,
                                         pi_dev_tgt_t dev_tgt,
                                         pi_p4_id_t table_id,
                                         pi_table_entry_t *table_entry) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)table_entry;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_default_action_done(pi_session_handle_t session_handle,
                                          pi_table_entry_t *table_entry) {
    (void)session_handle;
    (void)table_entry;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_default_action_get_handle(
        pi_session_handle_t session_handle, pi_dev_tgt_t dev_tgt,
        pi_p4_id_t table_id, pi_entry_handle_t *entry_handle) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)entry_handle;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entry_delete(pi_session_handle_t session_handle,
                                   pi_dev_id_t dev_id, pi_p4_id_t table_id,
                                   pi_entry_handle_t entry_handle) {
    (void)session_handle;
    (void)dev_id;
    (void)table_id;
    (void)entry_handle;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entry_delete_wkey(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        pi_p4_id_t table_id,
                                        const pi_match_key_t *match_key) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)match_key;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entry_modify(pi_session_handle_t session_handle,
                                   pi_dev_id_t dev_id, pi_p4_id_t table_id,
                                   pi_entry_handle_t entry_handle,
                                   const pi_table_entry_t *table_entry) {
    (void)session_handle;
    (void)dev_id;
    (void)table_id;
    (void)entry_handle;
    (void)table_entry;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entry_modify_wkey(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        pi_p4_id_t table_id,
                                        const pi_match_key_t *match_key,
                                        const pi_table_entry_t *table_entry) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)match_key;
    (void)table_entry;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entries_fetch(pi_session_handle_t session_handle,
                                    pi_dev_tgt_t dev_tgt, pi_p4_id_t table_id,
                                    pi_table_fetch_res_t *res) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)res;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entries_fetch_one(pi_session_handle_t session_handle,
                                        pi_dev_id_t dev_id, pi_p4_id_t table_id,
                                        pi_entry_handle_t entry_handle,
                                        pi_table_fetch_res_t *res) {
    (void)session_handle;
    (void)dev_id;
    (void)table_id;
    (void)entry_handle;
    (void)res;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entries_fetch_wkey(pi_session_handle_t session_handle,
                                         pi_dev_tgt_t dev_tgt,
                                         pi_p4_id_t table_id,
                                         const pi_match_key_t *match_key,
                                         pi_table_fetch_res_t *res) {
    (void)session_handle;
    (void)dev_tgt;
    (void)table_id;
    (void)match_key;
    (void)res;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entries_fetch_done(pi_session_handle_t session_handle,
                                         pi_table_fetch_res_t *res) {
    (void)session_handle;
    (void)res;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_idle_timeout_config_set(
        pi_session_handle_t session_handle, pi_dev_id_t dev_id, pi_p4_id_t table_id,
        const pi_idle_timeout_config_t *config) {
    (void)session_handle;
    (void)dev_id;
    (void)table_id;
    (void)config;

    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_table_entry_get_remaining_ttl(
        pi_session_handle_t session_handle, pi_dev_id_t dev_id, pi_p4_id_t table_id,
        pi_entry_handle_t entry_handle, uint64_t *ttl_ns) {
    (void)session_handle;
    (void)dev_id;
    (void)table_id;
    (void)entry_handle;
    (void)ttl_ns;

    return PI_STATUS_SUCCESS;
}