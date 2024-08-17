#ifndef HEADER_CBLACS_H
#define HEADER_CBLACS_H

/* Header by {{ self_name }}
 * Generated: {{ current_time }}
 * Version {{ self_name }}: {{ self_repo_url }}tree/{{ self_commit }}
 * Version scalapack: {{ scalapack_repo_url }}tree/{{ scalapack_commit }}
 */

#include <mpi.h>

/* Macros defined in reference scalapack.
 * See https://github.com/Reference-ScaLAPACK/scalapack/blob/master/BLACS/SRC/Bdef.h
 */
{%- for i, f in defines %}
#ifndef {{ i }}
#define {{ i }} {{ f }}
#endif // {{ i }}
{% endfor %}

/* Declarations
 */
{% for declarations in [declarations_c, declarations_f] -%}
{% for declaration in declarations %}
extern {{ declaration.return_type }} {{ declaration.name }}(
    {%- for vtype, vname in declaration.params -%}
        {{ vtype }} {{ vname }}{% if not loop.last %}, {% endif %}
    {%- endfor -%}
    );
    {% endfor %}
{% endfor %}
#endif // HEADER_CBLACS_H