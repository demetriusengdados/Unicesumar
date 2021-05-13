variable "pg_cluster_size" {
    type = string
    description = "Tamanho do nosso node do cluster.pg
    default = "db-s-1vcpu-1gb"
}

variable "pg_nodes_count"{
    type = number
    description = "Numero de nodes no nosso cluster"
    default = 1
}

variable "database_name"{
    type = string
    description = "Nome do banco de dados"
    default = "limerick"
}


variable "database_username"{
    type = string
    description = "Username para o banco de dados"
    default = "Irlanda"
    sensitive = true
