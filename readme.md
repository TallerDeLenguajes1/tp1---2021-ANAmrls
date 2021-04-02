# Taller de lenguajes I - 2021 - Programador Universitario / Licenciatura en informática

## Trabajo Práctico N°1

**Manejo de punteros y versionado en git y github**

### Tareas en el repositorio (punto 1.b) 📋

**Archivo .gitignore**

Un archivo .gitignore es un archivo de texto plano que especifica qué archivos (o directorios completos) deben ser ignorados por Git en el proceso de control de versiones, el mismo generalmente se ubica en la carpeta raíz del repositorio. Vale aclarar que los archivos incluídos en un _commit_ antes de crear el archivo .gitignore no se borrarán del repositorio; en este caso primero se debe detener el seguimiento del archivo (para que sea ignorado en el siguiente _commit_) con el comando:

```
git rm --cached nombreArchivo
```

Es conveniente el uso del archivo .gitignore porque en general no necesitamos o queremos incluir en el control de versiones todos los archivos de nuestro directorio local, como por ejemplo credenciales, información privada, instaladores de software, archivos creados por el sistema operativo automáticamente, etc.

La página [gitignore.io](https://www.gitignore.io/) es una herramienta online que genera de manera automática el archivo .gitignore de acuerdo a los parámetros que le indiquemos. La misma cuenta con un campo de búsqueda donde escribimos los nombres de todas las herramientas, sistema operativo, IDEs, lenguajes, etc. que estemos utilizando y luego hacemos clic en _"Create"_; esto genera el código del gitignore y solo resta copiarlo y pegarlo en el archivo .gitignore.

### Punto 2 📋

Un puntero es una variable que guarda la dirección de memoria de otra variable, en este caso de la variable num. Los resultados de los apartados "b" y "c" son iguales porque cuando se realiza la asignación de un puntero se utiliza el operador de dirección _&_, de la siguiente forma: `int *p_num = &num`, es decir que estamos asignando al puntero la dirección de memoria de la variable num.
En el apartado "d" se obtiene un resultado diferente porque no estamos mostrando el contenido del puntero p_num, sino que ahora se hace uso del operador _&_ para mostrar por pantalla la dirección de memoria del puntero mismo.

## Bibliografía 📖

* [git-scm.com](https://git-scm.com/docs/gitignore)
* [pluralsight.com](https://www.pluralsight.com/guides/how-to-use-gitignore-file)
* [desarrolloweb.com](https://desarrolloweb.com/articulos/archivo-gitignore.html)

## Otros recursos 🛠️

* [Plantilla del readme](https://cutt.ly/StvUFis)
* [Formato Markdown](https://cutt.ly/jtvP2ER)
* [guides.github.com](https://guides.github.com/features/mastering-markdown/#syntax)

## Autores ✒️

* **Ana Lucia Morales** - [ANAmrls](https://github.com/ANAmrls)
