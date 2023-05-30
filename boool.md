# Boool

Logical operators.

# Truth Tables

## `baseAnd(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

## `baseOr(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

## `baseNot(bool a)`

| a | return |
| --- | --- |
| 0 | 1 |
| 1 | 0 |

## `andNot(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

## `orNot(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

## `notAnd(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 1 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

## `notOr(bool a, bool b)`

| a | b | return |
| --- | --- | --- |
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 0 |